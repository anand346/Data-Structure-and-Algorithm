bool checkPal(int a[],int s,int e){
    if(s > e){
        return true;
    }
    if(a[s] == a[e]){
        return checkPal(a,s+1,e-1);
    }else{
        return false;
    }
}
bool checkSorted1(int a[],int n){
    if(n == 0){
        return true;
    }
    if(a[0] < a[1]){
        return checkSorted(a+1,n-1);
    }else{
        return false;
    }
}

bool checkElement4(int a[],int n,int x,int i){
    if(n == i){
        return false;
    }
    if(a[i] == x){
        return true;
    }
    return checkElement4(a,n,x,i + 1);
}
int firstIndexOfElement(int a[],int n,int m,int i){

    if(n == i){
        return -1;
    }

    if(a[i] == m){
        return i;
    }

    return firstIndex1(a,n,m,i+1);
} 

int countOccurence2(int a[],int n, int x){
    if(n < 0){
        return 0;
    }
    if(a[0] == x){
        return countOccurence2(a+1,n-1,x) + 1;
    }else{
        return countOccurence2(a+1,n-1,x);
    }
}

void printAll(int a[],int n,int x,int i){
    if(i == n){
        return;
    }
    if(a[i] == x){
        cout<<i<<" ";
    }
    printAll(a,n,x,i+1);
}
int saveAllPos(int a[],int n,int x,int i,vector<int> &ans){
    if(i == n){
        return 0;
    }
    if(a[i] == x){
        ans.push_back(i);
    }
    saveAllPos(a,n,x,i+1,ans);
    
}
int sumOfArray3(int a[],int n,int i){
    if(i == n){
        return 0;
    }
    return a[i] + sumOfArray3(a,n,i+1);
}