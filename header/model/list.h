/*
 * File: list.h
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a list.h contain class List (MODEL)
 */
#pragma one

#include "playList.h"

class List
{
private:
  static shared_ptr<List> instance;
  vector<Playlist> list;
  List() {}

public:
  static shared_ptr<List> getInstanceList(); // Get singleton Object

  void addPlaylist(const Playlist &playlist);
  void erasePlaylist(const int &index);
  void getInforPlaylist(const int &index);

  void addMediaFile(const int &index, const MediaFile &media);
  void eraseMediaFile(const int &index, const int &indexMediaFile);
  void changeTitleMediaFile(const int &index, const int &indexMediaFile,
                            const string &title);
  void changeArtistMediaFile(const int &index, const int &indexMediaFile,
                             const string &artist);
  void changeYearMediaFile(const int &index, const int &indexMediaFile,
                           const int &year);
  void getInforMediaFile(const int &index, const int &indexMediaFile);

  void getInforList();

  string getPathMediaFile(const int &index, const int &indexMediaFile);
};
