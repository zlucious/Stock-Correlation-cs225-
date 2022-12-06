## Project Devlog  


#### [10/25/21 - 10/31/21] Week 1
Discussed our goals with this project. We met at CIF several times to decide on what we would focus on. Debated focusing on the relating popular Spotify artists, but ultimately decided on the relationships between different sectors of the stock market via graphs. 


#### [11/1/21 - 11/7/21] Week 2
Discussed how we would go about gathering data: finding the most useful API for our purposes. Other notable points of discussion were: how to format data, how to quantify the relationship between nodes which we would store in edges--ultimately decided to use Spearman coefficients. We also disscussed what the best graph implementation to use would be, we decided on an adjacency list, because checking if two things were connected didn't seem to be an important enough factor to base our whole implementation around.


#### [11/8/21 - 11/14/21] Week 3
This week we grabbed S&P 500 tickers in a .txt file: Iteratively pinged the API. Gathered data with: /data_processing/data_scripts/stock_data_collection.ipynb. We also started to work on the creation of the Graph class. Our graph stores a list of nodes, and the nodes store a list of edges. The edges hold the spearman coefficent as well as pointers back to the nodes they came from. We also started writing the BFS algorithm to get a handle on how the Graph interface worked.


#### [11/15/21 - 11/21/21] Week 4
In week 4 we met to disscuss how to close out the project. At this meeting we delegated the work for who would work on what out of the last two algorithms, as well as disscussed how the makefile should be made, how the tests should be written, and how we wanted the main function to work.


#### [11/29/21 - 12/5/21] Week 5
During week five we created google docs for the documents we needed to turn in, and we also created google slides prsentations. We worked together on the layout of the slides, as well as continued disscussion surrounding how the implmentations of the shortest path, and strongly connected compoments graph algorithms would work.


#### [12/6/21 - 12/13/21] Week 6
This week we wrapped things up. We finalized the idea and wrote the makefile. This allowed us to finally start writing the tests and more thouroulgh testing our code. We finished the last two algorithms, strongly connected compoments and the shortest path algorithm. We also finished the final report, readme, and the presentation. We finiazled our make fucntion and worked on reorganizing the directory and commenting the code so it will be easier to follow.
