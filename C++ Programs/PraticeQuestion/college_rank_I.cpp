#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long int
#define mod 1000000007
#define pb push_back
#define INF 1000000000
#define maxN 1000001
#define vl vector<ll>
#define loop1(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
class student
{
public:
    int id, pref1, pref2, pref3, clg;
    double percent;
    student()
    {
        id = pref1 = pref2 = pref3 = 0;
        clg = -1;
    }
};
bool comp(student a, student b)
{
    if (a.percent > b.percent)
        return true;
    else if (a.percent < b.percent)
        return false;
    else
        return a.id < b.id;
}
int get_str(string s)
{
    bool flag = false;
    string ans = "";
    for (int j = 0; j < int(s.length()); j++)
    {
        if (s[j] == '-')
            flag = true;
        else if (flag)
            ans += s[j];
    }
    return stoi(ans);
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll c, n;
    cin >> c >> n;
    int seats[c + 1];
    for (int i = 1; i <= c; i++)
        cin >> seats[i];
    string input;
    vector<student> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        vector<string> inputs;
        string temp = "";
        for (int i = 0; i < int(input.length()); i++)
        {
            if (input[i] == ',')
            {
                inputs.pb(temp);
                temp = "";
            }
            else
                temp += input[i];
        }
        inputs.pb(temp);
        vec[i].id = get_str(inputs[0]);
        vec[i].percent = stod(inputs[1]);
        vec[i].pref1 = get_str(inputs[2]);
        vec[i].pref2 = get_str(inputs[3]);
        vec[i].pref3 = get_str(inputs[4]);
    }
    sort(vec.begin(), vec.end(), comp);
    for (int i = 0; i < n; i++)
    {
        if (seats[vec[i].pref1] > 0)
        {
            seats[vec[i].pref1] -= 1;
            vec[i].clg = vec[i].pref1;
        }
        else if (seats[vec[i].pref2] > 0)
        {
            seats[vec[i].pref2] -= 1;
            vec[i].clg = vec[i].pref2;
        }
        else if (seats[vec[i].pref3] > 0)
        {
            seats[vec[i].pref3] -= 1;
            vec[i].clg = vec[i].pref3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (vec[i].clg != -1)
        {
            cout << "Student-" << vec[i].id << " C-" << vec[i].clg << "\n";
        }
    }
    // your code goes here
    return 0;
}