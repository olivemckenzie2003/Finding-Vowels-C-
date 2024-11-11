# Finding-Vowels-C++

Index-Based Loop: As previously mentioned, we use an index-based for loop (for (unsigned int i = 0; i < size; ++i)) instead of a range-based loop. This is necessary because char arrays do not support begin() and end() without additional context.

Vowel Checking Logic: The if statement correctly checks each character against both lowercase and uppercase vowels. If a match is found, vowel_count is incremented.

Testing the Corrected Code

To ensure code works as expected, create a complete example using the provided message array. This will help verify that vowel_count correctly counts the number of vowels.

Breakdown of the Test

Analyze the message array to confirm that it contains exactly 6 vowels:

'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d'

Vowels: e, i, u, e, i, e
Total Vowels: 6

This matches the expected vowel_count of 6, confirming that the corrected code works as intended.
Additional Tips

Case Sensitivity: The vowel checking logic accounts for both lowercase and uppercase vowels. Ensure that input array includes characters in both cases if necessary.

Edge Cases: Consider testing function with different arrays, including those with no vowels, all vowels, or mixed characters, to ensure robustness.

Treating 'y' as a Vowel: As per initial note, if wish to treat 'y' as a vowel in certain contexts, extend the if condition. For simplicity, it's treated as a consonant in this exercise.
