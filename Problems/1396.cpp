class UndergroundSystem {
    map<pair<string,string>, pair<double,double>>t; 
    map<int, pair<string,pair<string,double>>>mem;
    public:
        UndergroundSystem() {

        }

        void checkIn(int id, string stationName, int T) {
            mem[id] = make_pair(stationName , make_pair("", T)); 
        }

        void checkOut(int id, string stationName, int T) {
            mem[id].second.first = stationName; 
            double tme = T - mem[id].second.second; 
            if (t.find(make_pair(mem[id].first , mem[id].second.first)) == t.end()) {
                t[make_pair(mem[id].first,mem[id].second.first)] = make_pair(tme , 1.0); 
            } else {
                t[make_pair(mem[id].first,mem[id].second.first)].first+=tme; 
                t[make_pair(mem[id].first,mem[id].second.first)].second+=1.0; 
            }
        }

        double getAverageTime(string startStation, string endStation) {
            double a = t[make_pair(startStation , endStation)].first;
            double b = t[make_pair(startStation , endStation)].second;
            return a/b;
        }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */

