#include"Playlist.h"
Song::Song(string title,string artist,int duration,string genre){
	this->title=title;
	this->artist=artist;
	this->duration=duration;
	this->genre=genre;
	this->next=NULL;
}
string Song:: get_title(){
	return title;
}
string Song:: get_artist(){
	return artist;
}
string Song:: get_genre(){
	return genre;
}
int Song:: get_duration(){
	return duration;
}
Song* Song::get_next(){
	return next;
}
void Song::set_artist(string artist){
	this->artist=artist;
}
void Song::set_title(string title){
	this->title=title;
}
void Song::set_duration(int duration){
	this->duration=duration;
}
void Song::set_genre(string genre){
	this->genre=genre;
}
void Song::set_next(Song* next){
	this->next=next;
}
Playlist::Playlist(){
	head=NULL;
}
void Playlist::createPL(){
	string option;
	string artist,title,genre;
	int duration;
	Song* current;
	current=head;
	do{
		cout<<"Enter the title of the song:";
		cin>>title;
		cout<<"Enter the artist of song:";
		cin>>artist;
		cout<<"Enter the duration of song:";
		cin>>duration;
		cout<<"Enter the genre of the song:";
		cin>>genre;
		Song* song=new Song(title,artist,duration,genre);
		if(head==NULL){
			head=song;
			current=head;
		}
		else{
			current->set_next(song);
			current=song;
		}
		cout<<"Do you want to enter details(y/n)?:";
		cin>>option;
	}
	while(option=="y");
}
void Playlist::displayPL(){
	Song* s=head;
	while(s!=NULL){
		cout<<s->get_title()<<"\t";
		cout<<s->get_artist()<<"\t";
		cout<<s->get_duration()<<"\t";
		cout<<s->get_genre()<<"\t";
		s=s->get_next();
		cout<<endl;
	}
	cout<<endl;
}
void Playlist::sortTitle(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_title()>q->get_title()){
				Song* temp=new Song(p->get_title(),p->get_artist(),p->get_duration(),p->get_genre());
				p->set_title(q->get_title());
				p->set_artist(q->get_artist());
				p->set_duration(q->get_duration());
				p->set_genre(q->get_genre());
				q->set_title(temp->get_title());
				q->set_artist(temp->get_artist());
				q->set_duration(temp->get_duration());
				q->set_genre(temp->get_genre());
				delete temp;
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
void Playlist::sortArtist(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_artist()>q->get_artist()){
				Song* temp=new Song(p->get_title(),p->get_artist(),p->get_duration(),p->get_genre());
				p->set_title(q->get_title());
				p->set_artist(q->get_artist());
				p->set_duration(q->get_duration());
				p->set_genre(q->get_genre());
				q->set_title(temp->get_title());
				q->set_artist(temp->get_artist());
				q->set_duration(temp->get_duration());
				q->set_genre(temp->get_genre());
				delete temp;
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
void Playlist::sortDuration(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_duration()>q->get_duration()){
				Song* temp=new Song(p->get_title(),p->get_artist(),p->get_duration(),p->get_genre());
				p->set_title(q->get_title());
				p->set_artist(q->get_artist());
				p->set_duration(q->get_duration());
				p->set_genre(q->get_genre());
				q->set_title(temp->get_title());
				q->set_artist(temp->get_artist());
				q->set_duration(temp->get_duration());
				q->set_genre(temp->get_genre());
				delete temp;
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
void Playlist::sortGenre(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_genre()>q->get_genre()){
				Song* temp=new Song(p->get_title(),p->get_artist(),p->get_duration(),p->get_genre());
				p->set_title(q->get_title());
				p->set_artist(q->get_artist());
				p->set_duration(q->get_duration());
				p->set_genre(q->get_genre());
				q->set_title(temp->get_title());
				q->set_artist(temp->get_artist());
				q->set_duration(temp->get_duration());
				q->set_genre(temp->get_genre());
				delete temp;
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
