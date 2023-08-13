/*
 * File: list.cpp
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a list.cpp contain implement method for class list
 */
#include "../../header/model/list.h"

/*
 * Variable: shared_ptr<List>
 * Description: List Shared Pointer point List Object
 * Input:
 *   None
 * Output:
 *   None
 */
shared_ptr<List> List::instance = nullptr;

/*
 * Function: getInstanceList
 * Description: get singleton List Object
 * Input:
 *   None
 * Output:
 *   return - List shared pointer
 */
shared_ptr<List> List::getInstanceList()
{
  if (instance == nullptr)
  {
    instance =
        shared_ptr<List>(new List()); // make_shared call constructor List, but
                                      // contructor list is private => Error
  }
  return instance;
}

/*
 * Function: addPlaylist
 * Description: add playlist to list
 * Input:
 *   playlist - const Playlist &
 * Output:
 *   None
 */
void List::addPlaylist(const Playlist &playlist) { list.push_back(playlist); }

/*
 * Function: erasePlaylist
 * Description: erase playlist out of list
 * Input:
 *   index - const int &
 * Output:
 *   None
 */
void List::erasePlaylist(const int &index)
{
  if (index >= 0 && index < list.size())
  {
    cout << "Erase playlist " << list[index].getNameString() << " is success" << endl;
    list.erase(list.begin() + index);
  }
  else
  {
    cout << "Not find index. Erase Playlist is not success" << endl;
  }
}

/*
 * Function: getInforPlaylist
 * Description: get infor playlist in list
 * Input:
 *   index - const int &
 * Output:
 *   None
 */
void List::getInforPlaylist(const int &index)
{
  if (index >= 0 && index < list.size())
  {
    list[index].getInforPlaylist();
  }
  else
  {
    cout << "Not find index. Get Playlist is not success" << endl;
  }
}

/*
 * Function: getInforList
 * Description: get infor list
 * Input:
 *   None
 * Output:
 *   None
 */
void List::getInforList()
{
  int count = 0;
  for (auto x : list)
  {
    cout << count << "       " << x.getNameString() << endl;
    ++count;
  }
}

/*
 * Function: addMediaFile
 * Description: add media file to playlist
 * Input:
 *   index - const int &
 *   media - const MediaFile &
 * Output:
 *   None
 */
void List::addMediaFile(const int &index, const MediaFile &media)
{
  if (index >= 0 && index < list.size())
  {
    list[index].addMediaFile(media);
    cout << "List " << list[index].getNameString() << " insert new media file is success" << endl;
  }
  else
  {
    cout << "Not find index. Insert new media file is not success ";
  }
}

/*
 * Function: eraseMediaFile
 * Description: erase media file from playlist
 * Input:
 *   index - const int &
 *   indexMediaFile - const int &
 * Output:
 *   None
 */
void List::eraseMediaFile(const int &index, const int &indexMediaFile)
{
  if (index >= 0 && index < list.size())
  {
    list[index].eraseMediaFile(indexMediaFile);
    cout << "List " << list[index].getNameString() << " erase media file " << indexMediaFile
         << " is success" << endl;
  }
  else
  {
    cout << "Not find index. Erase media file is not success ";
  }
}

/*
 * Function: changeTitleMediaFile
 * Description: update title for media file
 * Input:
 *   index - const int &
 *   indexMediaFile - const int &
 *   title - const string &
 * Output:
 *   None
 */
void List::changeTitleMediaFile(const int &index, const int &indexMediaFile,
                                const string &title)
{
  if (index >= 0 && index < list.size())
  {
    list[index].changeTitleMediaFile(indexMediaFile, title);
    cout << "List " << list[index].getNameString() << " change title media file " << indexMediaFile
         << " is success" << endl;
  }
  else
  {
    cout << "Not find index. Change Title media file is not success ";
  }
}

/*
 * Function: changeArtistMediaFile
 * Description: update artist for media file
 * Input:
 *   index - const int &
 *   indexMediaFile - const int &
 *   artist - const string &
 * Output:
 *   None
 */
void List::changeArtistMediaFile(const int &index, const int &indexMediaFile,
                                 const string &artist)
{
  if (index >= 0 && index < list.size())
  {
    list[index].changeArtistMediaFile(indexMediaFile, artist);
    cout << "List " << list[index].getNameString() << " change Artist media file " << indexMediaFile
         << " is success" << endl;
  }
  else
  {
    cout << "Not find index. Change artist media file is not success ";
  }
}

/*
 * Function: changeYearMediaFile
 * Description: update publish year for media file
 * Input:
 *   index - const int &
 *   indexMediaFile - const int &
 *   year - const int &
 * Output:
 *   None
 */
void List::changeYearMediaFile(const int &index, const int &indexMediaFile,
                               const int &year)
{
  if (index >= 0 && index < list.size())
  {
    list[index].changeYearMediaFile(indexMediaFile, year);
    cout << "List " << list[index].getNameString() << " change year media file " << indexMediaFile
         << " is success" << endl;
  }
  else
  {
    cout << "Not find index. Change year media file is not success ";
  }
}

/*
 * Function: getInforMediaFile
 * Description: get infor of media file
 * Input:
 *   index - const int &
 *   indexMediaFile - const int &
 *   title - const string &
 * Output:
 *   None
 */
void List::getInforMediaFile(const int &index, const int &indexMediaFile)
{
  if (index >= 0 && index < list.size())
  {
    list[index].getInforMediaFile(indexMediaFile);
    cout << "List " << list[index].getNameString() << " get infor media file " << indexMediaFile
         << " is success" << endl;
  }
  else
  {
    cout << "Not find index. Get infor media file is not success ";
  }
}

/*
 * Function: getPathMediaFile
 * Description: get path to media file
 * Input:
 *   index - const int &
 *   indexMediaFile - const int &
 *   title - const string &
 * Output:
 *   return - string path
 */
string List::getPathMediaFile(const int &index, const int &indexMediaFile)
{
  if (index >= 0 && index < list.size())
  {
    return list[index].getPathMediaFile(indexMediaFile);
  }
  else
  {
    return "";
    cout << "Not find indexPlaylist. Get infor media file is not success ";
  }
}
