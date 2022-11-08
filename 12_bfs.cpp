class Solution {
public:
	vector<int>bfsOffGraph(int V, vector<int> adj[]) {
		// bfs is the array of traversed node in order, the ans
		vector<int> bfs;

		// vis is the array to check if node is already visited
		vector<int> vis(V+1, 0);
		// V+1 incase the count is from 1

		for(int i = 1 ; i <= V ; i++) {
			// 1 to V so that all components are traversed
			if(!vis[i]) {
				queue<int> q;
				q.push(i);
				vis[i] = 1;

				// pop() from queue until empty, inorder to go bfs
				while(!q.empty()) {
					int node = q.front();
					q.pop();
					bfs.push_back(node);
					
					// now we need to traverse the edges
					// connected to node i
					for(auto it : adj[node]) {
						if(!vis[it]) {
							q.push(it);
							vis[it] = 1;
						}
					}
				}
			}
		}
		return bfs;
	}
};