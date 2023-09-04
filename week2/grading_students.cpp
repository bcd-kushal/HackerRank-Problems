
vector<int> gradingStudents(vector<int> grades) {
    for(auto &grade: grades){
        if(grade<38)
            continue;

        if(5 - grade%5 < 3)
            grade+=5-grade%5;
    }

    return grades;
}
