


// insert()

	set<int> s = {1, 2, 3};
	s.insert(4);

	for(auto e : s) {
		cout << e << ' ';
	}

// erase()

	set<int> s = {1, 2, 3};
	// remove an element 
	auto it = s.find(3);
	s.erase(it);

	for(int e : s) {
		cout << e << ' ';
	}


	set<int> s = {1, 2, 3, 4, 5};
	// erase by range
	auto from = s.find(3);
	auto to = s.find(6);
	s.erase(from, to);

	for(int e : s) {
		cout << e << ' ';
	}


// find()

	set<int> s = {1, 2, 3, 4, 5};
	auto it = s.find(3);

	cout << *it << sesh;


// count()

	set<int> s = {1, 2, 3, 4, 5};
	
	int count = s.count(4); // 1 if 4 is in the set, otherwise 0 

	cout << count << sesh;


