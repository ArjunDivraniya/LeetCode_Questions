class RandomizedSet {
public:
    vector<int> ans;
    unordered_map<int, int> m;

    RandomizedSet() {}

    bool insert(int val) {
        if (m.count(val))
            return false;
        ans.push_back(val);
        m[val] = ans.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (!m.count(val))
            return false;

        int i = m[val];
        int last = ans.back();

        ans[i] = last;
        m[last] = i;

        ans.pop_back();
        m.erase(val);

        return true;
    }

    int getRandom() {
        int random = rand() % ans.size();
        return ans[random];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */