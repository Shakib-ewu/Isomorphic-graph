#include<bits/stdc++.h>
using namespace std;
int main()
{
    int graph1[30][30],graph2[30][30],i,j,vertex1,vertex2,edges1,edges2,sum1=0,sum2=0,ans=0,deg1[30],deg2[30];
    cout<<"enter the graph 1"<<endl;
    cout<<"vertex = ";
    cin>>vertex1;
    int sum3;
    int test1=0,test2=0;
    cout<<"enter adjacent matrix"<<endl;
    for(int i=0; i<vertex1; i++)
    {
        sum3=0;
        for(int j=0; j<vertex1; j++)
        {
            cin>>graph1[i][j];
            sum1=sum1+graph1[i][j];
            sum3=sum3+graph1[i][j];
            test1=1;
        }
        deg1[i]=sum3;
    }
    cout<<"enter the graph 2"<<endl;
    cout<<"vertex = ";
    cin>>vertex2;
    cout<<"enter adjacent matrix"<<endl;
    for(int i=0; i<vertex2; i++)
    {
        sum3=0;
        for(int j=0; j<vertex2; j++)
        {
            cin>>graph2[i][j];
            sum2=sum2+graph2[i][j];
            sum3=sum3+graph2[i][j];
            test2=1;
        }
        deg2[i]=sum3;
    }
    if(test1==0&&test2==0)
    {
        cout<<endl;
        cout<<endl;
        cout<<"This two graph is not isomorphic"<<endl;
    }
    else
    {

        if(vertex1!=vertex2)
        {
            cout<<endl;
            cout<<endl;
            cout<<"this two graph is not isomorphic"<<endl;
            return 0;
        }
        else
        {
            edges1=sum1/2;
            edges2=sum2/2;
            if(edges1!=edges2)
            {
                cout<<endl;
                cout<<endl;
                cout<<"this two graph is not isomorphic"<<endl;
                return 0;
            }
            else
            {
                sort(deg1,deg1+vertex1);
                sort(deg2,deg2+vertex2);
                for(i=0; i<vertex1; i++)
                {
                    if(deg1[i]!=deg2[i])
                    {
                        ans=1;
                        break;
                    }
                }
                if(ans==1)
                {
                    cout<<endl;
                    cout<<endl;
                    cout<<"This is not isomorphic"<<endl;
                    return 0;
                }
                else if(ans==0)
                {
                    cout<<endl;
                    cout<<endl;
                    cout<<"This is isomorphic"<<endl;
                    return 0;
                }
            }
        }
    }
}
