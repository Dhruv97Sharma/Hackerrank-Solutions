long largestRectangle(vector<int> h) {
long mx = 0;
for(int i = 0; i < h.size(); i++){
    long lmn = 0;
    long rmn = 0;
    for(int j = i-1; j >= 0; j--){
        if(h[i] <= h[j]){
            lmn++;
        }
        else{
            break;
        }
    }
    for(int j = i+1; j < h.size(); j++){
        if(h[i] <= h[j]){
            rmn++;
        }
        else{
            break;
        }
    }
    long area = h[i]*(lmn+rmn+1);
    mx = max(mx,area);
}
return mx;
}