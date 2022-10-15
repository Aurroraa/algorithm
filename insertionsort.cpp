vector<int> sort_by_insertion(vector<int> v) {
    for (int i = 1; i < (int)v.size(); i += 1) {
        // Consider the element is currently on position j, and try to move it even further left
        for (int j = i; j > 0; j -= 1) {
            if (v[j] < v[j - 1]) {
                swap(v[j], v[j - 1]);
            } else {
                break;
            }
        }
    }
    return v;
}
