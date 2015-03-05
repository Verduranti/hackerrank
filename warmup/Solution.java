import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
	
    public static void main(String[] args) {
    	Scanner scanIn = new Scanner(System.in);
    	int numPeople = scanIn.nextInt();
    	int numSkills = scanIn.nextInt();
    	
    	List<Integer> skills = new ArrayList<>();
    	
    	for(int i = 0; i < numPeople; i++)
    	{
    		//String temp = "0b" + ;
    		skills.add(scanIn.nextInt(2));
    	}
  	 
    	scanIn.close();
    	
    	int maxSkills = 0;
    	int maxTeams = 0;
    	
    	//numPeople is at least 2
    	for(int i = 0; i < numPeople-1; i++)
    	{
    		int firstSkill = (Integer)skills.toArray()[i];
    		for(int j = i+1; j < numPeople; j++)
    		{
    			int secondSkill = (Integer)skills.toArray()[j];
        		int combined = Integer.bitCount(firstSkill | secondSkill);
        		if(combined > maxSkills) {
        			maxSkills = combined;
        			maxTeams = 1;
        		}
        		else if(combined == maxSkills) {
        			maxTeams++;
        		}
        		else {
        			//do nothing
        		}
    		}	
    	}

    	System.out.println(maxSkills + "\n" + maxTeams);
    }
    
}
