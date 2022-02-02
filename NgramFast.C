#include <iostream>
#include <string>
#include "WordList.h"
#include "NgramList.h"
#include "NgramFast.h"

/* You may NOT declare any global variables. */

/* You may add data members to the NgramFast class by adding them to NgramFast.h */
/* You may add more methods to the NgramFast class.  Put prototypes in NgramFast.h */
/* You may add more classes.  If you do, they need to be cleanly
 * separated into a .h and a .C files. You would add an include
 * for the .h at the top.  You would need to change the makefile
 * so that your new classes are compiled and linked with the
 * executable. */

/*
 * Ngrams
 *
 * Takes as input the size of the ngrams to be built and the list  
 * of words to build the ngrams from and builds a collection
 * of ngrams. You may not use the C++ STL to define a collection object.
 * You need to implement your own. 
 *
 * param: int ngramSz - size of the ngram
 * param: const WordList & wl - list of the words use
 */
Ngrams::Ngrams(int ngramSz, WordList & wl)
{
   //Add any code you need to initialize whatever structure
   //you use to hold your ngrams.

   //This code doesn't change
   this->ngramSz = ngramSz;
   wl.beginIter();
   while (!wl.endIter())
   {
      std::string ngram = wl.getNextNgram(ngramSz);
      wl.incrementIter();
      //Insert the ngram in the collection object
      if (!ngram.empty()) insertNgram(ngram);
   }

   //You can make additional calls here if you need to.

}


/*
 * Ngrams destructor
 *
 * Automatically called when Ngrams object goes out of scope.
 * Delete any space dynamically allocated to hold the ngrams.
 */
Ngrams::~Ngrams()
{
}


/*
 * insertNgram
 *
 * Inserts ngram into whatever structure you choose to hold
 * your ngrams. If the ngram is already in the collection, the
 * insert simply increments the count.
 *
 * param: std::string s - ngram to be inserted
 * return: none
 */
void Ngrams::insertNgram(std::string s)
{
   
}

/*
 * addIncreasing
 * 
 * Adds the ngrams to the ngram list in increasing order of ngram count.
 *
 */
void Ngrams::addIncreasing(NgramList * incrLst)
{
   
       //The call to add it to the list looks something like this:
       //incrLst->addToNgramList(ngramStr, ngramCnt);
       //You will probably have this call inside of a loop (or two)
}

/*
 * addDecreasing
 *
 * Adds the ngrams to the ngram list in decreasing order of ngram count.
 *
 */
void Ngrams::addDecreasing(NgramList * decrLst)
{
      //The call to add it to the list looks something like this:
      //decrLst->addToNgramList(ngramStr, ngramCnt);
      //You will probably have this call inside of a loop (or two)
}







