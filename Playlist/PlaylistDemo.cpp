#include"Playlist.cpp"
int main(){
	Playlist myPL;
	cout<<"Creation of playlist:\n";
	myPL.createPL();
	cout<<"Displaying Playlist \n";
	myPL.displayPL();
	cout<<"Sorting on title \n";
	myPL.sortTitle();
	myPL.displayPL();
	cout<<"Sorting on artist \n";
	myPL.sortArtist();
	myPL.displayPL();
	cout<<"Sorting on duration \n";
	myPL.sortDuration();
	myPL.displayPL();
	cout<<"Sorting on genre \n";
	myPL.sortGenre();
	myPL.displayPL();
}
