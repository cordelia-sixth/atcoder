#include <iostream>
using namespace std;
int main(void){
    // あいこになる場合は 3 もしくは 全て同じ数値
    // 入力から数値を取得
    // 2つの値が同じか判定
    // 同じならそれと同じ値を出力
    // そうでなければ合計が3になる数値を出力
    
    int x, y;
    
    cin >> x >> y;
    
    if(x == y) {
      cout << x;
    } else {
      cout << (3 - x - y);
    }
    
    return 0;
}
