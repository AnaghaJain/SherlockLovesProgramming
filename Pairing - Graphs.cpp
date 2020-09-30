#include<bits/stdc++.h>
#include<list>
using namespace std;

class Graph{
    int v;
    list<pair<int, int>> l;

    public:
        Graph(int v){
            this->v = v;
        }

        void addedge(int u, int x){
            l.push_back(make_pair(u,x));
        }

        int findset (int i, int* parent){
            if(parent [i]==-1){
                return i;
            }
            return parent[i]=findset(parent[i], parent);
        }

        void union_set(int x, int y, int *parent, int *rank){
            int s1=findset(x, parent);
            int s2=findset(y, parent);

            if(s1!=s2){
                if (rank[s1]<rank[s2]){
                    parent[s1]=s2;
                    rank[s2]+=rank[s1];
                }

                else{
                    parent[s2]=s1;
                    rank[s1]+=rank[s2];
                }
            }
        }

        int pairing(){
            int *parent = new int [v];
            int *rank = new int [v];

            for (int i=0; i<v; i++){
                parent[i]=-1;
                rank[i]=1;
            }

            for (auto edge: l){
                int i=edge.first;
                int j=edge.second;

                int s1=findset(i, parent);
                int s2=findset(j, parent);

                union_set(s1, s2, parent, rank);
            }

                int ans=0;
                for(int i=0; i<v; i++){
                    ans+=(v-rank[findset(i, parent)]);
                }

                delete[] parent;
                delete[] rank;

                return ans/2;
        }
};

int main() {
    int n, m;
    cin>>n>>m;

    Graph g(n);

    while(m--){
        int x, y;
        cin>>x>>y;
        g.addedge(x, y);
    }

    cout<<g.pairing()<<endl;
}
