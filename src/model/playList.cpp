/*
 * File: playList.cpp
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a playList.cpp contain implement method for class playList
 */
#include "../../header/model/playList.h"

/*
 * Contructor: Playlist
 * Description: Initialize property for Object
 * Input:
 *   name - const string &
 * Output:
 *   None
 */
Playlist::Playlist(const string &name) : namePlaylist(name) {}

/*
 * Function: addMediaFile
 * Description: add media file to playlist
 * Input:
 *   media - const MediaFile&
 * Output:
 *   None
 */
void Playlist::addMediaFile(const MediaFile &media)
{
  playlist.push_back(media);
}

/*
 * Function: eraseMediaFile
 * Description: erase media file from playlist by index
 * Input:
 *   index - const int&
 * Output:
 *   None
 */
void Playlist::eraseMediaFile(const int &index)
{
  // Check index is avaiable ?
  if (index >= 0 && index < playlist.size())
  {
    playlist.erase(playlist.begin() + index);
  }
  else
  {
    cout << "Not find index. Erase Media File is not success" << endl;
  }
}

/*
 * Function: changeTitleMediaFile
 * Description: change title of media file by index
 * Input:
 *   index - const int &
 *   title - const string &
 * Output:
 *   None
 */
void Playlist::changeTitleMediaFile(const int &index, const string &title)
{
  if (index >= 0 && index < playlist.size())
  {
    playlist[index].setTitleMedia(title);
  }
  else
  {
    cout << "Not find index. Change Name Media File is not success" << endl;
  }
}

/*
 * Function: changeArtistMediaFile
 * Description: change artist of media file by index
 * Input:
 *   index - const int &
 *   artist - const string &
 * Output:
 *   None
 */
void Playlist::changeArtistMediaFile(const int &index, const string &artist)
{
  if (index >= 0 && index < playlist.size())
  {
    playlist[index].setArtistMedia(artist);
  }
  else
  {
    cout << "Not find index. Change Artist Media File is not success" << endl;
  }
}

/*
 * Function: changeYearMediaFile
 * Description: change publish year of media file by index
 * Input:
 *   index - const int &
 *   year - const int &
 * Output:
 *   None
 */
void Playlist::changeYearMediaFile(const int &index, const int &year)
{
  if (index >= 0 && index < playlist.size())
  {
    playlist[index].setYearPublish(year);
  }
  else
  {
    cout << "Not find index. Change Year Media File is not success" << endl;
  }
}

/*
 * Function: getInforMediaFile
 * Description: get infor of a media file by index
 * Input:
 *   index - const int &
 * Output:
 *   None
 */
void Playlist::getInforMediaFile(const int &index)
{
  if (index >= 0 && index < playlist.size())
  {
    cout << index << "       " << playlist[index].getTitle();
    cout << "                        " << playlist[index].getArtist();
    cout << "                        " << playlist[index].getYearPublish() << endl;
  }
  else
  {
    cout << "Not find index. Get Infor Media File is not success" << endl;
  }
}

/*
 * Function: getInforPlaylist
 * Description: get infor of playlist contain media files
 * Input:
 *   None
 * Output:
 *   None
 */
void Playlist::getInforPlaylist()
{
  for (int i = 0; i < playlist.size(); i++)
  {
    getInforMediaFile(i);
    cout << "----------------------------------------------------" << endl;
  }
}

/*
 * Function: setNameString
 * Description: set name for playlist
 * Input:
 *   name - const string &
 * Output:
 *   None
 */
void Playlist::setNameString(const string &name) { namePlaylist = name; }

/*
 * Function: getNameString
 * Description: get name of playlist
 * Input:
 *   None
 * Output:
 *   return - string namePlaylist
 */
string Playlist::getNameString() { return namePlaylist; }

/*
 * Function: getPathMediaFile
 * Description: get path of media file in playlist
 * Input:
 *   index - const int &
 * Output:
 *   return - string path
 */
string Playlist::getPathMediaFile(const int &index)
{
  if (index >= 0 && index < playlist.size())
  {
    return playlist[index].getPath();
  }
  else
  {
    return "";
    cout << "Not find indexMedia. Get Path Media File is not success" << endl;
  }
}
