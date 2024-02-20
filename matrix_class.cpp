#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

using namespace std;

template <typename object>
class matrix
{
public:
    matrix(int rows, int cols) : array(rows)
    {
        for (auto & thisrow :array){
            thisrow.resize(cols);
        }
    }
    matrix(vector<vector<object>> v): array{v}
    {}
    matrix (vector<vector<object>>&& v):array{std::move(v)}
    {}
    const vector<object> & operator[](int row) const
    {
        return array[row];
    }
    vector<object> &operator[] (int row) {
        return array[row];
    }

    int numrows() const
    {
        return array.size();
    }
    int numcols() const{
        return numrows() ? array[0].size(): 0;
    }
    private:
     vector<vector<object>> array;

};
#endif