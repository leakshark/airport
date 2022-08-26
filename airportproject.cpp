#include<bits/stdc++.h>
#include<bitset>
#include<complex>
#include<bitset>
#include<vector>
#include<algorithm>
#include<utility>
#include<valarray>
#include<map>
#include<queue>
#include<math.h>
#include<fstream>
//#include<ofstream>
#include<list>
//#include<conio.h>
//----------------------------------------------------
#define int long long
#define fn(n) for(int i=0;i<v1.size();++i)
#define fm(n) for(int i=0;i<n;i++)
#define pro  ios_base::sync_with_stdio(false)
#define coder  cin.tie(NULL)
//#define fn(k) for(int i=0;i<)
//----------------------------------------------------
using namespace std;
//--------------------------

void project(){
    string d;
    cout<<"ENTER YOUR DESTINATION::";
    cin>>d;
    cout<<endl;
    int k=0;
    int h=0;
    
    string s;
    cout<<"ENTER THE  DESTINATION::";
    cin>>s;
    
    cout<<endl;
    cout<<"------------------------------------------------";
    cout<<endl;
    //-------------------------------------
    vector<string>v1;
    v1.push_back("delhi");
    v1.push_back("kolkata");
    v1.push_back("mumbai");
    v1.push_back("chennai");
    v1.push_back("lucknow");
    v1.push_back("ahmdabad");
    v1.push_back("durgapur");
    v1.push_back("goa");
    v1.push_back("chandigarh");
    v1.push_back("jammu&kashmir");
    vector<int>v2;
    vector<int>v3;
    
    pair<string,int>m1=make_pair("delhi",0);
    pair<string,int>m2=make_pair("kolkata",1);
    pair<string,int>m3=make_pair("mumbai",2);
    pair<string,int>m4=make_pair("chennai",3);
    pair<string,int>m5=make_pair("lucknow",4);
    pair<string,int>m6=make_pair("ahmdabad",5);
    pair<string,int>m7=make_pair("durgapur",6);
    pair<string,int>m8=make_pair("goa",7);
    pair<string,int>m9=make_pair("chandigarh",8);
    pair<string,int>m10=make_pair("jammu&kashmir",9);
    //-------------------------------------------------
    fn(n){
        if(s==v1[i]){
            h=i;
        }
    }

    fn(n){
        if(d==v1[i]){
            k=i;
        }
    }
    
    //cout<<k<<endl;
    //---------------------------------------
    
    for(int i=k;i<=v1.size();++i){
        if(s==v1[i]){
            for(int j=k;j<=h;++j){
                v2.push_back(j);
            }
        }
    }
    
    
    for(int i=0;i<v2.size();++i){
        if(v2[i]==m1.second){
            cout<<m1.first<<"-->";
            v3.push_back(m1.second);
        }else if(v2[i]==m2.second){
            cout<<m2.first<<"-->";
            v3.push_back(m2.second);
        }else if(v2[i]==m3.second){
            cout<<m3.first<<"-->";
            v3.push_back(m3.second);
        }else if(v2[i]==m4.second){
            cout<<m4.first<<"-->";
            v3.push_back(m4.second);
        }else if(v2[i]==m5.second){
            cout<<m5.first<<"-->";
            v3.push_back(m5.second);
        }else if(v2[i]==m6.second){
            cout<<m6.first<<"-->";
            v3.push_back(m6.second);
        }else if(v2[i]==m7.second){
            cout<<m7.first<<"-->";
            v3.push_back(m7.second);
        }else if(v2[i]==m8.second){
            cout<<m8.first<<"-->";
            v3.push_back(m8.second);
        }else if(v2[i]==m9.second){
            cout<<m9.first<<"-->";
            v3.push_back(m9.second);
        }else if(v2[i]==m10.second){
            cout<<m10.first<<"-->";
            v3.push_back(m10.second);
        }else{
            cout<<"invalid"<<endl;
        }
    }
    
    cout<<endl;
    int sum=0;
    map<int,int>mp;
    mp.insert({0,10});
     mp.insert({1,10});
      mp.insert({2,15});
       mp.insert({3,15});
        mp.insert({4,20});
         mp.insert({5,25});
          mp.insert({6,25});
           mp.insert({7,30});
            mp.insert({8,35});
             mp.insert({9,35});
             
    for(int i=0;i<v3.size()-1;++i){
        sum+=mp[v3[i]];
    }
    cout<<"--------------------------------------------------------"<<endl;
    int a,b;
    cout<<"ENTER THE NUMBER OF TICKETS::"<<" ";
    cin>>a;
    
    cout<<"THE REQUIRED FARE IS::"<<(sum*a)<<endl;
    
    cout<<"---------------------------------------------------------";
}

signed main(){
    //pro;
    //coder;
    
	  project();
}