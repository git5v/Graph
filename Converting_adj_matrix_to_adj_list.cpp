
void fun(vector<vector<int>> &matrix)
{
  int n = matrix.size();
  vector<pair<int,int>> adj_list[n+1];
  
  for(auto &it:matrix)
  {
    adj_list[it[0]].emplace_back(make_pair(t[1],t[2])); 
            //t[0]-> parent node, t[1]->child nodes, t[2]->weigths   
  }
   //For printing adj list
  for(int i=0;i<n;i++)
  {
    cout<<i<<"->";
    for(auto &it:adj_list[i])
      cout<<it<< " ";
  }
  cout<<endl;
  }

 }
