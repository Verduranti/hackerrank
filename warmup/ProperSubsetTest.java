/* Given two strings of words (space-separated), write a function to determine if the
   second string is a proper subset of the first string */

/* Examples:
First				Second					Result		Reason
"cat bear dog" 		"cat dog" 				true		Is a proper subset
"cat cat dog bear" 	"cat cat cat cat"		true		Is a proper subset
"cat bear dog"		"horse"					false		New element - not a subset
"dog bear cat"		"cat bear dog"			false		Not a "proper" subset
*/

import java.util.Arrays;
import java.util.Set;
import java.util.HashSet;

public class ProperSubsetTest 
{
	/* I usually let the IDE generate java doc-like comments for functions*/
	public static boolean isProperSubset(String fullString, String testString)
	{
		/* Return variable. Allows for a single return in a function, required by some
		style guides. */
		/* Reflection: I gave it better name too. */
		boolean isSubsetFlag = true;

		/* Reflection: Cleaning these up. As promised. For loops are gone too. */
	// 	String[] setWords = fullString.split("\\s+");
	// 	String[] subSetWords = testString.split("\\s+"); 

		/* Reflection: I realize I forgot the <String> type specification
		but I stand by my decision to use HashSet. SortedSet would also have worked. I
		realize now it doesn't really buy me anything for the scope of this problem */
	
		/* Create HashSets to allow for easy comparisons */
		Set<String> fullSet = new HashSet<>(Arrays.asList(fullString.split("\\s+")));
		Set<String> testSet = new HashSet<>(Arrays.asList(testString.split("\\s+")));

		/* Reflection: I forgot Java supports this much more elegant syntax */
		for(String test : testSet)
		{
			if(!fullSet.contains(test))
			{
				isSubsetFlag = false;
				break; /*new item case */
				/* For each element in the set, if it is a new element not in the main set
				  we are done - this can't be a proper subset */
			}
			/* else the item is contained... move on*/
		}
		/* Reflection: I didn't defend it very well, but this solution is actually a good
		one. Using HashSet buys me constant time lookups. Making the overall solution 
		O(n). A further clean up is to use Set's "containsAll" function. */

		/* Check that the subset is a proper subset. (Cannot be the set itself). */
		/* We know there are no new elements so we can get away with just checking that
		the two sets are the same size */
		if (isSubsetFlag && fullSet.size() == testSet.size())
		{
			/* Reflection: I had a return in here, which was very inconsistant.
			Also had a typo in the if. All cleaned up now. */
			isSubsetFlag = false;
		}

		return isSubsetFlag;
	}

	public static void testStrings(String fullString, String testString, boolean expectedResult)
	{
		if(isProperSubset(fullString, testString) == expectedResult)
			System.out.println("PASS");
		else
			System.out.println("FAIL");
	
	}

	public static void main(String[] args)
	{
		// Example 1
		testStrings("cat bear dog", "cat dog", true);
		// Example 2
		testStrings("cat cat dog bear", "cat cat cat cat", true);
		// Example 3
		testStrings("cat bear dog", "horse", false);
		// Example 4
		testStrings("dog bear cat","cat bear dog", false);
	}
}



