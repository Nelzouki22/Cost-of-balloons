#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;  // عدد حالات الاختبار
    cin >> t;

    while (t--) {
        int greenCost, purpleCost;
        cin >> greenCost >> purpleCost;

        int n;  // عدد المشاركين
        cin >> n;

        vector<pair<int, int>> participants(n);

        // إدخال حالة كل مشارك (حل المشكلة الأولى والمشكلة الثانية)
        for (int i = 0; i < n; ++i) {
            cin >> participants[i].first >> participants[i].second;
        }

        // حساب التكلفة لكل سيناريو
        int firstScenarioCost = 0, secondScenarioCost = 0;
        for (int i = 0; i < n; ++i) {
            firstScenarioCost += participants[i].first * greenCost + participants[i].second * purpleCost;
            secondScenarioCost += participants[i].first * purpleCost + participants[i].second * greenCost;
        }

        // طباعة أقل تكلفة بين السيناريوهين
        cout << min(firstScenarioCost, secondScenarioCost) << endl;
    }

    return 0;
}
