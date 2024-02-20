 #include<bits/stdc++.h>
using namespace std;
int mostBooked(int n, vector<vector<int>>& meetings) {
        long long int m = meetings.size();
        sort(meetings.begin(),meetings.end());
        vector<long long int> rooms(n,0);

        //<end_time, room_number>
        priority_queue<pair<long long int,int>, vector<pair<long long int,int>>, greater<pair<long long int,int>>> pq;

        //top of this will give me least indexed available room.
        priority_queue<int, vector<int>, greater<int>> available;
        for(int i = 0;i<n;i++){
            available.push(i);
        }

        //inserting 1st meeting to the 0th room
        pq.push({meetings[0][1],available.top()});
        rooms[available.top()]++;
        available.pop();


        for(long long int i = 1;i<m;i++){
            //1st remove all the rooms whose end <= meeting[i][1];
            //push that room to available
            //push the new meerting into pq with the top room in available.

            long long int start = meetings[i][0];
            long long int end = meetings[i][1];
            long long int delay = end - start;

            //free all the rooms whose meeting is over
            while(!pq.empty() && pq.top().first <= start){
                int room = pq.top().second;
                available.push(room);
                pq.pop();
            }

            //if room available
            if(!available.empty()){
                int room = available.top();
                available.pop();
                pq.push({end,room});
                rooms[room]++;
            }
            else{
                //if no room available then push it in the room which gets free 1st by adding the delay.
                // the room which gets free 1st will be on the top of min heap pq.
                int room = pq.top().second;
                long long int end_i = pq.top().first;
                pq.pop();
                pq.push({end_i + delay, room});
                rooms[room]++;
            }
        }

        int max_count = 0;
        int sol;
        for(int i = 0;i<n;i++){
            if(rooms[i]>max_count){
                sol = i;
                max_count = rooms[i];
            }
        }
        return sol;
    }