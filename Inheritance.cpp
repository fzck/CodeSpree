class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		// Write your constructor
        Student(string fn, string ln, int ID, vector <int> testScores):Person(fn,ln,ID){
            this->testScores = testScores;
        }
  
  		// Write char calculate()
        char calculate(){
            int ave = 0;
            
            for(int i = 0; i != testScores.size(); i++){
                ave += testScores[i];               
            }
            ave /= testScores.size();
            
            if (ave >= 90 && ave <= 100) return 'O';
            if (ave >= 80 && ave < 90) return 'E';
            if (ave >= 70 && ave < 80) return 'A';
            if (ave >= 55 && ave < 70) return 'P';
            if (ave >= 40 && ave < 55) return 'D';
            else return 'T';
            
        }
};