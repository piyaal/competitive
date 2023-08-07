
#include<bits/stdc++.h>
using namespace std;

struct info {
  int Start, End;
} Time[50];

int main() {
  cout << "Enter the number of process = ";
  int number; cin >> number;
  cout << "Enter arrival time for each process = ";
  int arrivaltime[number + 1];
  for (int i = 1; i <= number; i++) {
    cin >> arrivaltime[i];
  }
  cout << "Enter burst time for each process = ";
  int bursttime[number + 1];
  for (int i = 1; i <= number; i++) {
    cin >> bursttime[i];
  }
  pair<int, int> Pair[number + 1];
  for (int i = 1; i <= number; i++) {
    Pair[i].first = arrivaltime[i];
    Pair[i].second = i;
  }
  sort(Pair + 1, Pair + number + 1);
  int last = 0;
  for (int i = 1; i <= number; i++) {
    int arrival = Pair[i].first, num = Pair[i].second;
    last = max(last, arrival);
    Time[num].Start = last;
    Time[num].End = Time[num].Start + bursttime[num];
    last = Time[num].End;
  }
  double sumwt = 0, sumtt = 0;
  cout << "Process ID" << "      " << "Arrival time" << "    " << "Burst time" << "    " << "Waiting time" << "   " <<  "Turnaround time" << endl;
  for (int i = 1; i <= number; i++) {
      int wt = Time[i].Start - arrivaltime[i];
      int tt = wt + bursttime[i];
      sumwt += wt;
      sumtt += tt;
      cout << "    " << i << "                  " << arrivaltime[i] << "              " << bursttime[i];
      cout << "              " << wt << "              " << tt << endl;
  }
  double avgwt = sumwt / number;
  double avgtt = sumtt / number;
  cout << "Average waiting time = " << fixed << setprecision(2) << avgwt << " ms" << endl;
  cout << "Average turn around time = " << fixed << setprecision(2) << avgtt << " ms" << endl;
  return 0;
}

