#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int bs(const std::vector<int>& v, int x) {
    // x is the key
    int l = 0;
    int n = v.size();
    int h = n - 1;
    int index = -1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (v[mid] == x) return mid;
        
        if (v[mid] < x) {
            index = mid;
            l = mid + 1;
        } else if (v[mid] > x) {
            h = mid - 1;
        }
    }
    return index;
}