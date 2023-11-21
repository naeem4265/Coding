/**
 * @param {string[]} garbage
 * @param {number[]} travel
 * @return {number}
 */
var garbageCollection = function(garbage, travel) {
    let ans = 0, n = garbage.length;
    var M=0,P=0,G=0;
    for(let i=n-1; i>=0; i--){
        if(M===1)   ans += travel[i];
        if(P===1)   ans += travel[i];
        if(G===1)   ans += travel[i];
        for(let j=0; j<garbage[i].length; j++){
            if(garbage[i][j]=='M'){
                M = 1;
                ans++;
            }
            if(garbage[i][j]=='P'){
                P = 1;
                ans++;
            }
            if(garbage[i][j]=='G'){
                G = 1;
                ans++;
            }
        }
    }
    return ans;
};