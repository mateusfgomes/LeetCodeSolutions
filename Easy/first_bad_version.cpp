// bool isBadVersion(int version): API implemented by "server";

int firstBad(long long int start, long long int end){
    if(start == end) return start;
    if(start == end-1){
        if(isBadVersion(start) == true) return start;
        else return end;            
    }

    long long int mid = (long long int) ((start+end)/ 2);

    if(isBadVersion(mid) == true){
        return firstBad(start, mid);
    }
    else{
        return firstBad(mid, end);
    }

}