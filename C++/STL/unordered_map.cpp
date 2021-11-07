// https://en.cppreference.com/w/cpp/container/unordered_map


using myMap = unordered_map<int, string>;
        myMap map = {
            {1, "Location"},
            {2, "Area"}};

        for(myMap::iterator it = map.begin(); it != map.end(); it++){
                cout << it->first << " " << it->second << endl;
        }
