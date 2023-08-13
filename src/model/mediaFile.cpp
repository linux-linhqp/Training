/*
 * File: mediaFile.cpp
 * Author: Linh Pham
 * Date: 11/08/2023
 * Description: This is a mediaFile.cpp contain implement method for class MediaFile
 */
#include "../../header/model/mediaFile.h"

/*
 * Contructor: MediaFile
 * Description: Initialize property for Object
 * Input:
 *   path - const string &
 * Output:
 *   None
 */
MediaFile::MediaFile(const string &path) : file(path.c_str())
{
  pathMediaFile = path;
}

/*
MediaFile::MediaFile(const MediaFile &other) {
  pathMediaFile = other.getPath();
  file = pathMediaFile.c_str();
}
*/

/*
 * Function: checkFile
 * Description: check file is null or not
 * Input:
 *   None
 * Output:
 *   return true-false
 */
bool MediaFile::checkFile() { return !file.isNull() && file.tag(); }

/*
 * Function: setPath
 * Description: set path to media file
 * Input:
 *   path - const string &
 * Output:
 *   None
 */
void MediaFile::setPath(const string &path)
{
  if (checkFile())
  {
    file = TagLib::FileRef(path.c_str());
    pathMediaFile = path;
  }
}

/*
 * Function: setTitleMedia
 * Description: set title for media file
 * Input:
 *   title - const string &
 * Output:
 *   None
 */
void MediaFile::setTitleMedia(const string &title)
{
  if (checkFile())
  {
    file.tag()->setTitle(title);
  }
}

/*
 * Function: setArtistMedia
 * Description: set artist for media file
 * Input:
 *   artist - const string &
 * Output:
 *   None
 */
void MediaFile::setArtistMedia(const string &artist)
{
  if (checkFile())
  {
    file.tag()->setArtist(artist);
  }
}

/*
 * Function: setYearPublish
 * Description: set Publish Year for media file
 * Input:
 *   year - const int&
 * Output:
 *   None
 */
void MediaFile::setYearPublish(const int &year)
{
  if (checkFile())
  {
    file.tag()->setYear(year);
  }
}

/*
 * Function: getTitle
 * Description: get title of media file
 * Input:
 *   None
 * Output:
 *   return string title
 */
string MediaFile::getTitle()
{
  return checkFile() ? file.tag()->title().toCString(true) : "";
}

/*
 * Function: getArtist
 * Description: get artist of media file
 * Input:
 *   None
 * Output:
 *   return string artist
 */
string MediaFile::getArtist()
{
  return checkFile() ? file.tag()->artist().toCString(true) : "";
}

/*
 * Function: getPath
 * Description: get path to media file
 * Input:
 *   None
 * Output:
 *   return string path
 */
string MediaFile::getPath() { return checkFile() ? pathMediaFile : ""; }

/*
 * Function: getYearPublish
 * Description: get publish year of media file
 * Input:
 *   None
 * Output:
 *   return int year
 */
int MediaFile::getYearPublish() { return checkFile() ? file.tag()->year() : 0; }

/*
 * Function: saveMediaFile
 * Description: save media file after update infor
 * Input:
 *   None
 * Output:
 *   return true-false
 */
bool MediaFile::saveMediaFile()
{
  if (checkFile())
  {
    return file.save();
  }
  return false;
}
