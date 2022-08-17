#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>q;
	int j,k,s,v,e;
	cout<<"enter the no of vertices: ";
	cin>>v;
	cout<<endl;
	int g[v+1][v+1]={0};
	bool visited[v+1]={false};
	cout<<"enter no of edges: ";
	cin>>e;
	cout<<endl;
	for(int i=1;i<=e;i++){
		cout<<"edge- "<<i<<":"<<" ";
		cin>>j>>k;
		g[j][k]=1;
	}
	cout<<"enter the vertex to be traverse: ";
	cin>>s;
	q.push(s);
	while(!q.empty()){
		s=q.front();
		q.pop();
		if(!visited[s])
		cout<<s<<" ";
		visited[s]=true;
		for(int i=1;i<=v;i++){
			if(g[s][i] && !visited[i])
			 q.push(i);
		}
	}
	return 0;
}
