using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using Firebase.Extensions;
using UnityEngine.UI;
using Google;
using System.Threading.Tasks;

public class GoogleSignInService : MonoBehaviour
{

    public string GoogleWebAPI = "547630993735-c5gie2s688g8ust07m3a9pfaghbuhtbi.apps.googleusercontent.com";

    private GoogleSignInConfiguration configuration;

    Firebase.Auth.FirebaseAuth auth;
    Firebase.Auth.FirebaseUser user;

    public Text statusText;

    public Button signInButton;

    void Awake()
    {
        Debug.Log(GoogleWebAPI);
        configuration = new GoogleSignInConfiguration
        {
            WebClientId = GoogleWebAPI,
            RequestIdToken = true
        };
    }

    // Start is called before the first frame update
    void Start()
    {
        Button signIn = signInButton.GetComponent<Button>();
        signIn.onClick.AddListener(OnSignIn);
    }

    // Update is called once per frame
    void Update()
    {

    }

    // void GoogleSignInClick()
    // {
    //     GoogleSignIn.Configuration = configuration;
    //     GoogleSignIn.Configuration.UseGameSignIn = false;
    //     GoogleSignIn.Configuration.RequestIdToken = true;
    //     GoogleSignIn.Configuration.RequestEmail = true;

    //     GoogleSignIn.DefaultInstance.SignIn().ContinueWith(OnGoogleAuthenticatedFinish);
    //     // // GoogleSignIn.DefaultInstance.SignIn().ContinueWith(OnGoogleAuthenticatedFinish);
    // }


    // void OnGoogleAuthenticatedFinish(Task<GoogleSignInUser> task)
    // {
    //     if (task.IsFaulted)
    //     {
    //         Debug.Log("Fault");
    //         StatusText.text = "Fault";
    //     }
    //     else if (task.IsCanceled)
    //     {
    //         Debug.Log("Login Cancel");
    //         StatusText.text = "Login Cancel";
    //     }
    //     else
    //     {
    //         Firebase.Auth.Credential credential = Firebase.Auth.GoogleAuthProvider.GetCredential(task.Result.IdToken, null);
    //         auth.SignInAndRetrieveDataWithCredentialAsync(credential).ContinueWithOnMainThread(task =>
    //         {
    //             if (task.IsCanceled)
    //             {
    //                 Debug.LogError("SignInWithCredentialAsync was Cancel");
    //                 StatusText.text = "SignInWithCredentialAsync was Cancel";
    //                 return;
    //             }
    //             if (task.IsFaulted)
    //             {
    //                 Debug.LogError("SignInWithCredentialAsync encounterd an error: " + task.Exception);
    //                 StatusText.text = "SignInWithCredentialAsync encounterd an error: " + task.Exception;
    //                 return;
    //             }

    //             user = auth.CurrentUser;

    //             StatusText.text = user.Email + user.DisplayName;

    //             Debug.Log(user);
    //         });
    //     }
    // }

    public void OnSignIn()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = false;
        GoogleSignIn.Configuration.RequestIdToken = true;
        GoogleSignIn.Configuration.RequestEmail = true;
        AddStatusText("Calling SignIn");

        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
          OnAuthenticationFinished);
    }

    public void OnSignOut()
    {
        AddStatusText("Calling SignOut");
        GoogleSignIn.DefaultInstance.SignOut();
    }

    public void OnDisconnect()
    {
        AddStatusText("Calling Disconnect");
        GoogleSignIn.DefaultInstance.Disconnect();
    }

    internal void OnAuthenticationFinished(Task<GoogleSignInUser> task)
    {
        if (task.IsFaulted)
        {
            using (IEnumerator<System.Exception> enumerator =
                    task.Exception.InnerExceptions.GetEnumerator())
            {
                if (enumerator.MoveNext())
                {
                    GoogleSignIn.SignInException error =
                            (GoogleSignIn.SignInException)enumerator.Current;
                    AddStatusText("Got Error: " + error.Status + " " + error.Message);
                }
                else
                {
                    AddStatusText("Got Unexpected Exception?!?" + task.Exception);
                }
            }
        }
        else if (task.IsCanceled)
        {
            AddStatusText("Canceled");
        }
        else
        {
            AddStatusText("Welcome: " + task.Result.DisplayName + "!");
            AddStatusText("Email: " + task.Result.Email);
            AddStatusText("IdToken: " + task.Result.IdToken);
            AddStatusText("ImageUrl: " + task.Result.ImageUrl);

            Debug.Log(task.Result.IdToken);
        }
    }

    public void OnSignInSilently()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = false;
        GoogleSignIn.Configuration.RequestIdToken = true;
        // GoogleSignIn.Configuration.RequestProfile = true;
        AddStatusText("Calling SignIn Silently");

        GoogleSignIn.DefaultInstance.SignInSilently()
              .ContinueWith(OnAuthenticationFinished);
    }


    public void OnGamesSignIn()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = true;
        GoogleSignIn.Configuration.RequestIdToken = false;

        AddStatusText("Calling Games SignIn");

        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
          OnAuthenticationFinished);
    }

    private List<string> messages = new List<string>();
    void AddStatusText(string text)
    {
        if (messages.Count == 5)
        {
            messages.RemoveAt(0);
        }
        messages.Add(text);
        string txt = "";
        foreach (string s in messages)
        {
            txt += "\n" + s;
        }
        statusText.text = txt;
    }

}
