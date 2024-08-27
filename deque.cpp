

// ======= deque =========
//========================
// push back()

	deque<int> dq = {1, 2, 3};
	dq.push_back(4);
	dq.push_back(5);

	for(auto e : dq) {
		cout << e << ' ';
	}


// push_front()

	deque<int> dq = {1, 2, 3};
	dq.push_front(0);

	for (auto e : dq) {
		cout << e << ' ';
	}


// pop_back()

	deque<int> dq = {1, 2, 3};
	dq.pop_back();

	for(auto e : dq) {
		cout << e << ' ';
	}

// pop_front() 

	deque<int> dq = {1, 2, 3};
	dq.pop_front();

	for (auto e : dq) {
		cout << e << ' ';
	}


// insert() 

// insert(target index, value)

	deque<int> dq = {1, 2, 3};
	dq.insert(dq.begin() + 2, 4);

	for (auto e : dq) {
		cout << e << ' ';
	}


// erase()

  
  // iterator erase(iterator position);
	deque<int> dq = {1, 2, 3, 4, 5};
	dq.erase(dq.begin() + 2);

	for (auto e : dq) {
		cout << e << ' ';
	}

	// iterator erase(iterator first, iterator last);
  // iterator erase(first target index, last target index - 1);
	deque<int> dq = {1, 2, 3, 4, 5};
	dq.erase(dq.begin() + 2, dq.begin() + 5);

	for (auto e : dq) {
		cout << e << ' ';
	}


// clear()

	deque<int> dq = {1, 2, 3, 4, 5};
	dq.clear();

	cout << dq.size();

// resize()

// resize(bortoman size koto );
	deque<int> dq = {1, 2, 3, 4, 5};
	dq.resize(3);

	cout << dq.size() << '\n';

	for (auto e : dq) {
		cout << e << ' ';
	}

	// resize(current size, initializing new element with something);

	deque<int> dq = {1, 2, 3, 4, 5};
	dq.resize(7, 0); // fill with zero (0)

	cout << dq.size() << '\n';

	for (auto e : dq) {
		cout << e << ' ';
	}


// front()

	deque<int> dq = {1, 2, 3, 4, 5};

	cout << dq.front();


// back()

	deque<int> dq = {1, 2, 3, 4, 5};

	cout << dq.back();


// assign()


	deque<int> dq = {1, 2, 3, 4, 5};

	dq.assign(7, 0);

	for (auto e : dq) {
		cout << e << ' ';
	}


// output: 0 0 0 0 0 0 0 

// another use case 

	deque<int> dq;
	vector<int> v = {1, 2, 3, 4, 5};

	dq.assign(v.begin(), v.end());

	for (auto e : dq) {
		cout << e << ' ';
	}






