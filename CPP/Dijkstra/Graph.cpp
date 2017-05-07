// Author: Sashi Penta

#include <vector>
#include <iostream>
#include <unordered_map>
#include <queue>
#include <limits.h>

using namespace std;

typedef pair<int, int> Pair;

typedef unordered_map<int, vector<Pair> > AdjacencyList;

class compare
{
public:
    bool operator() (const Pair& p, const Pair& q)
    {
        return p.first < q.first;
    }
};

typedef priority_queue<Pair, vector<Pair>, compare> MinQueue;

class Graph
{
public:
    Graph(int nv)
    {
        numVertices = nv;
    }

    void addEdge(int s, int t, int w)
    {
        addEdge1(s,t,w);
        addEdge1(t,s,w);
    }

    void addEdge1(int s, int t, int w)
    {
        int alreadyExist = 0;

        if(list.find(s) != list.end())
        {
            int size = list[s].size();

            for(int i = 0; i < size; i++)
            {
                if(list[s][i].first == t)
                {
                    alreadyExist = 1;

                    if(list[s][i].second > w)
                    {
                        list[s][i].second = w;
                    }
                }
            }
        }

        if(!alreadyExist)
        {
            list[s].push_back(make_pair(t,w));
        }
    }

    void shortestPaths(int source)
    {
        vector<int> dist;
        dist.resize(numVertices);

        for(int i = 0; i < numVertices; i++)
        {
            if(i != source)
            {
                dist[i] = INT_MAX;
            }
        }

        dist[source] = 0;

        MinQueue q;
        q.push(make_pair(0,source));

        while(!q.empty())
        {
            Pair p = q.top();
            q.pop();

            int u = p.second;
            int d = p.first;

            for(auto edge : list[u])
            {
                int v = edge.first;
                int w = edge.second;

                int alt = d + w;

                if(dist[v] > alt)
                {
                    dist[v] = alt;

                    q.push(make_pair(dist[v],v));
                }
            }
        }

        for(int i = 0; i < numVertices; i++)
        {
            if(i != source)
            {
                if(dist[i] == INT_MAX)
                    cout << "-1" << " ";
                else
                    cout << dist[i] << " ";
            }
        }
        cout << endl;
    }

private:
    int numVertices;
    AdjacencyList list;    
};

