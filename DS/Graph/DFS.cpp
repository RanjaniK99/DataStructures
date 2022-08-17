#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>s;
	int i,j,k,v,e,start;
	int g[v+1][v+1]={0};
	bool visited[v+1]={false};
	cout<<"enter the no of vertices: ";
	cin>>v;
	cout<<"enter the no of egdes: ";
	cin>>e;
	for(int k=0;k<=v;k++){
		for(int x=0;x<=v;x++){
			g[k][x]=0;
		}
	}
	for(i=1;i<=e;i++){
		cout<<"egde: ";
		cin>>j>>k;
		g[j][k]=1;
	}
	cout<<"enter vertex to be traverse: ";
	cin>>start;
	s.push(start);
	while(!s.empty()){
		start=s.top();
		s.pop();
		if(!visited[start]){
			cout<<start<<" ";
		}
		visited[start]=true;
		for(i=1;i<=v;i++){
		   if(g[start][i] && !visited[i]){
		      s.push(i);
		}
		}
	}
	return 0;
}
//#include<iostream>
//#include<stack>
//using namespace std;
//int main(){
//	stack<int>s;
//	int i,j,k,start,v,e;
//	int g[v+1][v+1]={0};
//	bool visited[v+1]={false};
//	cout<<"enter the no of vertices: ";
//	cin>>v;
//	cout<<"enter the no of edges: ";
//	cin>>e;
//	for(i=1;i<=e;i++){
//		cout<<"edges:"<<i<<" ";
//		cin>>j>>k;
//		g[j][k]=1;
//	}
//	cout<<"enter the vertex to be travese: ";
//	cin>>start;
//	s.push(start);
//	while(!s.empty()){
//		start=s.top();
//		s.pop();
//		if(!visited[start])
//			cout<<start<<" ";
//		visited[start]=true;
//		for(int i=1;i<=v;i++){
//		  if(g[start][i] && !visited[i])
//		    s.push(i);		
//	}
//	}
//	return 0;
//}
