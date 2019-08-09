    #include <bits/stdc++.h>

    #define debug(x) cout<<#x<<" => "<<x<<endl;
    #define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

    typedef long long ll;
    typedef long double ld;
    using namespace std;

    void merge(ll arr[][2],ll l,ll m,ll r ){
        ll i,j,k;
        ll n1 = m-l+1;
        ll  n2 = r-m;
        ll L[n1][2],R[n2][2];
        for (i = 0; i < n1; i++){
            L[i][0] = arr[l + i][0];
            L[i][1] = arr[l + i][1]; 
        }
        for (j = 0; j < n2; j++){
            R[j][0] = arr[m + 1+ j][0];
            R[j][1] = arr[m + 1+ j][1];
        }
        i = 0; // Initial index of first subarray 
        j = 0; // Initial index of second subarray 
        k = l;
        while (i < n1 && j < n2) 
        { 
            if ( (L[i][0] < R[j][0] )||( (L[i][0] == R[j][0] )&& L[i][1] > R[j][1]  ) ) 
            { 
                arr[k][0] = L[i][0];
                arr[k][1] = L[i][1]; 
                i++; 
            } 
            else    
            { 
                arr[k][0] = R[j][0];
                arr[k][1] = R[j][1]; 
                j++; 
            } 
            k++; 
        }
        /* Copy the remaining elements of L[], if there 
        are any */
        while (i < n1) 
        { 
            arr[k][0] = L[i][0];
            arr[k][1] = L[i][1];
            i++; 
            k++; 
        } 
    
        /* Copy the remaining elements of R[], if there 
        are any */
        while (j < n2) 
        { 
            arr[k][0] = R[j][0];
            arr[k][1] = R[j][1]; 
            j++; 
            k++; 
        } 
    }

    void mergeSort(ll arr[][2], ll l,ll r){
        if(l<r){
            ll m = l+(r-l)/2;
            mergeSort(arr,l,m);
            mergeSort(arr, m+1, r); 
            merge(arr, l, m, r); 
        }
    }

    int main(){
        ll t;
        scanf("%lli",&t);
    
        while(t--){
            ll n;
            scanf("%lli",&n);
            ll arr[n][2];
            ll it = 0;
        
            while(n--){
                scanf("%lli",&arr[it][0]);
                scanf("%lli",&arr[it][1]);
                
                it++;
            
            }
            mergeSort(arr,0,it-1);
            for(ll i=0;i<it;i++){
                printf("%lli %lli\n",arr[i][0],arr[i][1]);
            }
        }
        return 0;
    }