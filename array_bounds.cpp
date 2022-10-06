/*C and C++ do not perform array bounds checking, and this turns out to be a security
issue, especially in handling strings. The risk increases even more when user-controlled data
is on the program stack (a local variable) */

template<typename T>
size_t index(vector<T> vec, T target) {
    return distance(vec.begin(),find(vec.begin(), vec.end(),target));
}
//finds the rightmost index of target. If not found, return size of the vector.
template<typename T>
size_t r_index(vector<T> vec, T target) {
    for(size_t idx = vec.size()-1;idx>=0;idx--) {
      if(vec[idx] == target) return idx;
    }
  return vector.size();
}


