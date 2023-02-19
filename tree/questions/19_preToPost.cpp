
// https://www.youtube.com/watch?v=TlmZOZwV8dg
// https://practice.geeksforgeeks.org/problems/preorder-to-postorder4423/1

void pretopost(int s ,int e ,vector<int> pre){
    if(s > e){
        return ;
    }

    int mid = s +1 ;
    while(mid <= e && pre[mid] < pre[s]){
        mid++;
    }

    mid--;

    pretopost(s+1,mid,pre);
    pretopost(mid+1,e,pre);

    cout<<pre[s]<<" ";
}


int main(){
    vector<int> pre = {4,3,2,7,6,5};
    int n = pre.size();
    pretopost(0,n-1,pre);
}
