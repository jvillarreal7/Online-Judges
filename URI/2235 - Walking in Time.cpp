#include <iostream>
using namespace std;

int main()
{
    int present = 2016;
    int f_token, s_token, t_token;
    cin>>f_token>>s_token>>t_token;
    bool back2daf[] = {false, false, false};
    for(int i = 0; i < 3; i++)
    {
        if((present - f_token - s_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token - s_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - f_token + s_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - f_token - s_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token + s_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - f_token + s_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token - s_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token + s_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token + s_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token - s_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - f_token + s_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - f_token - s_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + f_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - f_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - f_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + s_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present + s_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - s_token + t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
        if((present - s_token - t_token) == 2016)
        {
            back2daf[i] = true;
            break;
        }
    }
    bool found = false;
    for(int i = 0; i < 3; i++)
    {
        if(back2daf[i] == true){
            cout<<"S"<<endl;
            found = true;
            break;
        }
    }
    if(found == false)
    {
        cout<<"N"<<endl;
    }
    return 0;
}
