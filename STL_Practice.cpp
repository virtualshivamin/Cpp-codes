#include <iostream>
#include <set>

using namespace std; 

void LearningSet(){
    set <int> st; 

    st.insert(1); 
    cout << st << endl ; 
    st.emplace(2); 
    st.insert(2); 
    st.insert(4); 
    st.insert(3); 

    auto it = st.find (3); 

    it = st.find (6); 

    st.erase(4); 

}

int main()
{
    LearningSet();
}