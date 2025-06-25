/************************************************************************
 *  File:           main.cpp
 *  Description:    Drive program flow and user interaction
 *
 *  Author:         Julia Dobbs
 *  Created:        6/21/2025
 *  Last Edited:    6/21/2025
 *  Target:         Cross-platform desktop; standard C++17
 *
 *  Dependencies:   
 *      - string
 * 
 *  Notes:
 *      - part of the SwatchSync project
 *      - used for matching input target colors to physical inventory
************************************************************************/

int main()
{
    //  Step 1: Load JSON into linked lists (gelPens, paintMarkers)
    //  ---------------------------------
    //  Load "inventory.json"
    //  For each entry in gelPens, create a color node compute RGB, convert to CIELAB, and add to the fineTip list
    //  For each entry in paintMarkers, do the same and add to the paintMarers list

    //  Step 2: Prompt for target color in hex
    //  ---------------------------------
    //  Validate that input is a valid hex code
    //  Convert hex to RGB
    //  Convert RGB to CIELAB

    //  Step 3: Search for closest matches in gelPens
    //  ---------------------------------
    //  Traverse fineTip linked list
    //  For each node:
    //      Calculate the ∆E for between target CIELAB and current node
    //      If distance < current best, reset topMatches[0], clear others
    //      If distance == current best, add to topMatches[0] (up to 3)
    //  Save the best matching gel pen colors

    //  Step 4: Repeat for paintMarkers
    //  ---------------------------------
    //  Same logic as Step 3 but on paintMarker linked list

    //  Step 5: Display results
    //  ---------------------------------
    //  For both gelPen and paintMarker matches:
    //      Print the top 1-3 closest matches
    //      Include: name, id, hex

    //  Step 6: Prompt for repeat or exit
    //  ---------------------------------
    //  Ask "Would you like to match another color? (y/n)"
    //  If 'y' then loop back to step 2
    //  If 'n' then break loop

    //  Step 7: Cleanup and exit
    //  ---------------------------------
    //  Free memory used by linked lists
    //  Return 0
}