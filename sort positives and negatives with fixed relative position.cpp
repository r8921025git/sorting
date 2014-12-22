//http://www.careercup.com/question?id=5201559730257920
//https://sites.google.com/site/spaceofjameschen/home/sort-and-search/sort-this-array-in-a-way-reserving-the-relative-position

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void Sort(vector<int>& A)
{   
    const int N=A.size();
    for (int i=0; i<N; ++i){
        if (A[i]>0) {
            for (int j=i+1; j<N; ++j) {
                if (A[j]<0) {
                    for (int k=j; k>i; --k) {
                        std::swap(A[k],A[k-1]);
                    }
                    break;
                }
            }
        }
    }
}

void DoTest(vector<int>& vec)
{
    cout << "Before sorting" << endl;
    for(auto i: vec){
        cout << setw(4) << i << " ";
    }
    cout << endl;

    Sort(vec);

    cout << "After sorting" << endl;
    for(auto i: vec){
        cout << setw(4) << i << " ";
    }
    cout << endl;
}

int main(int argc, char* argv[])
{
    int arr[] = {-1, 1, 3, -2, 2};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    DoTest(vec);

return 0;
}
