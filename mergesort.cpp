vector<int> v, aux;
void merge_sort(int left, int right) {
    if (left == right) {
        return; // An array with a single element is already sorted.
    }
    int middle = (left + right) / 2;
    merge_sort(left, middle);
    merge_sort(middle + 1, right);
    aux.clear();
    int i = left, j = middle + 1; //the two arrays that need merging are v[left...middle] and v[middle + 1...right]
                                  //so we set our two pointers to the beginnings of their respective arrays
    while (i <= middle || j <= right) {
        // Two cases in which we append the element of the first array to the merge array:
        // - the second array is sorted
        // - the first array is not empty & the element in the first array is smaller than
        // the one in the second
        if (j > right || (i <= middle && v[i] < v[j]) {
            aux.push_back(v[i]);
            i += 1;
        } else {
            aux.push_back(v[j]);
            j += 1;
        }
    }
    for (int i = left; i <= right; i += 1) {
        v[i] = aux[i - left];
    }
}
