// basics 

    map<int, int> mp;

    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});

    // for (auto it : mp) {
    //     cout << it.first << ' ' << it.second << sesh;
    // }

    for (auto it : mp) {
        cout << it.second << ' ';
    }


// begin() and end () 

    map<int, int> mp;

    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});

    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++ ) {
        cout << it -> first << ' ' << it -> second << sesh;
    }



// size() 

    map<int, int> mp;

    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});

    int size = mp.size();

    cout << size << sesh;


// another example: 

    map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    int size = mp.size();

    cout << size << sesh;

// max_size() 

    map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    int mx_size = mp.max_size();

    cout << mx_size << sesh;



// erase() 

// removing by key
    map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    mp.erase(2);

    for (auto e : mp) {
        cout << e.first << ' ' << e.second << sesh;
    }


// remove an element by iterator 
    map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    auto it = mp.find(3);

    mp.erase(it);

    for (auto e : mp) {
        cout << e.first << ' ' << e.second << sesh;
    }


// remove a range of element 

    map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    mp.erase(mp.begin(), mp.end());

    for (auto e : mp) {
        cout << e.first << ' ' << e.second << sesh;
    }



// another example:
    map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    auto start = mp.find(1);
    auto end = mp.find(3);

    mp.erase(start, end);

    for (auto e : mp) {
        cout << e.first << ' ' << e.second << sesh;
    }



// clear() 
    map<int, int> mp = {{1, 10}, {2, 20}, {3, 30}, {4, 40}};

    mp.clear();

    for (auto e : mp) {
        cout << e.first << ' ' << e.second << sesh;
    }


// count()
// is a key existing within the map or not ? 

    map<int, int> mp = {{1, 10}, {2, 15}, {3, 20}, {4, 30}};

    int cnt = mp.count(1);
    cout << "count of 1: " << cnt << sesh;

