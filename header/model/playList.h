/*
 * File: playList.h
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a playList.h contain class Playlist
 */
#pragma one

#include "mediaFile.h"
#include <vector>

class Playlist
{
private:
  vector<MediaFile> playlist;
  string namePlaylist;

public:
  Playlist(const string &name);

  void addMediaFile(const MediaFile &media);
  void eraseMediaFile(const int &index);
  void getInforMediaFile(const int &index);
  void changeTitleMediaFile(const int &index, const string &title);
  void changeArtistMediaFile(const int &index, const string &artist);
  void changeYearMediaFile(const int &index, const int &year);

  void getInforPlaylist();
  string getPathMediaFile(const int &index);

  void setNameString(const string &name);
  string getNameString();
};
