


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



// lower_bound()

//lower_bound() method is used to find the iterator pointing to the first element in the set that is " not less than " the given value.

	set<int> s = {1, 3, 5, 7, 9};
	
	auto it = s.lower_bound(4);
	cout << *it << sesh;

// another example:
	set<int> s = {1, 3, 5, 7, 9};
	
	set<int>::iterator it = s.lower_bound(4);
	if (it != s.end()) {
		cout << "lower bound of 4 : " << *it << '\n';
	}
	else {
		cout << "4 not found in the set!!" << '\n';
	}


// upper_bound()
// upper_bound() method is used to find the iterator pointing to the first element in the set that is "greater than " the given value.
	set<int> s = {1, 3, 5, 7, 9};
	
	auto it = s.upper_bound(4);
	cout << *it << '\n';


// another example: 

	set<int> s = {1, 3, 5, 7, 9};
	
	set<int>::iterator it = s.upper_bound(4);
	if (it != s.end()) {
		cout << "upper bound of 4 : " << *it << '\n';
	}
	else {
		cout << "4 not found in the set!!" << '\n';
	}



// swap()

	set<int> s = {1, 3, 5, 7, 9};
	set<int> s2 = {1, 2, 3, 4, 5};

	cout << "Before swap() s:\n";
	for (int e : s) {
		cout << e  << ' ';
	}
	cout << "\nBefore swap() s2: \n";
	for (int e : s2) {
		cout << e << ' ';
	}

	s.swap(s2);

	cout << "After swap() s: \n";
	for (int e : s) {
		cout << e << ' ';
	}
	cout << "\nAfter swap() s2:\n";
	for (int e : s2) {
		cout << e << ' ';
	}



