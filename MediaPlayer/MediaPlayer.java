import java.util.Scanner;

public class MediaPlayer {

    // Song Node
    static class SongNode {
        String songName;
        SongNode prev;
        SongNode next;

        SongNode(String songName) {
            this.songName = songName;
        }
    }

    // Playlist
    static class Playlist {
        SongNode head;
        SongNode tail;
        SongNode currentSong;

        // Add Song
        public void addSong(String songName) {
            SongNode newSong = new SongNode(songName);

            if (head == null) {
                head = tail = newSong;
                currentSong = head;
                return;
            }

            tail.next = newSong;
            newSong.prev = tail;
            tail = newSong;
        }

        // Display Current Song
        public void displaySong() {
            if (currentSong != null) {
                System.out.println("Currently Playing: "
                        + currentSong.songName);
            } else {
                System.out.println("No song is playing.");
            }
        }

        // Next Song
        public void nextSong() {
            if (currentSong != null &&
                    currentSong.next != null) {

                currentSong = currentSong.next;
                displaySong();
            } else {
                System.out.println("No next song available.");
            }
        }

        // Previous Song
        public void previousSong() {
            if (currentSong != null &&
                    currentSong.prev != null) {

                currentSong = currentSong.prev;
                displaySong();
            } else {
                System.out.println("No previous song available.");
            }
        }

        // Remove Current Song
        public void removeCurrentSong() {

            if (currentSong == null) {
                System.out.println("No song to remove.");
                return;
            }

            System.out.println(
                    "Removed: " + currentSong.songName);

            if (head == tail) {
                head = tail = currentSong = null;
            }
            else if (currentSong == head) {
                head = head.next;
                head.prev = null;
                currentSong = head;
            }
            else if (currentSong == tail) {
                tail = tail.prev;
                tail.next = null;
                currentSong = tail;
            }
            else {
                currentSong.prev.next =
                        currentSong.next;

                currentSong.next.prev =
                        currentSong.prev;

                currentSong =
                        currentSong.next;
            }
        }

        // Display Playlist
        public void displayPlaylist() {

            if (head == null) {
                System.out.println("Playlist is empty.");
                return;
            }

            SongNode temp = head;

            System.out.println("\nPlaylist:");

            while (temp != null) {
                System.out.print(
                        temp.songName + " -> ");
                temp = temp.next;
            }

            System.out.println("NULL");
        }
    }

    // Shuffle Playlist
    public static void shufflePlaylist(
            Playlist playlist) {

        if (playlist.head == null) {
            System.out.println(
                    "Playlist is empty.");
            return;
        }

        int size =
                getPlaylistSize(playlist);

        for (SongNode current =
             playlist.head;

             current != null;

             current = current.next) {

            int randomIndex =
                    (int) (Math.random() * size);

            SongNode randomNode =
                    getNodeAtIndex(
                            playlist,
                            randomIndex);

            swapSongs(current, randomNode);
        }

        playlist.currentSong =
                playlist.head;

        System.out.println(
                "Playlist shuffled successfully!");
    }

    // Playlist Size
    public static int getPlaylistSize(
            Playlist playlist) {

        int count = 0;

        SongNode temp =
                playlist.head;

        while (temp != null) {
            count++;
            temp = temp.next;
        }

        return count;
    }

    // Node at Index
    public static SongNode getNodeAtIndex(
            Playlist playlist,
            int index) {

        SongNode temp =
                playlist.head;

        for (int i = 0;
             i < index;
             i++) {

            temp = temp.next;
        }

        return temp;
    }

    // Swap Songs
    public static void swapSongs(
            SongNode a,
            SongNode b) {

        String temp =
                a.songName;

        a.songName =
                b.songName;

        b.songName =
                temp;
    }

    // Main Method
    public static void main(String[] args) {

        Scanner sc =
                new Scanner(System.in);

        Playlist playlist =
                new Playlist();

        // Default Songs
        playlist.addSong("Shape of You");
        playlist.addSong("Believer");
        playlist.addSong("Perfect");
        playlist.addSong("Thunder");
        playlist.addSong("Jaglan is a billionaire");
       
        int choice;

        do {

            System.out.println(
                    "\n===== MEDIA PLAYER =====");

            System.out.println(
                    "1. Display Playlist");
            System.out.println(
                    "2. Current Song");

            System.out.println(
                    "3. Next Song");

            System.out.println(
                    "4. Previous Song");

            System.out.println(
                    "5. Remove Current Song");

            System.out.println(
                    "6. Shuffle Playlist");

            System.out.println(
                    "7. Add Song");

            System.out.println(
                    "8. Exit");

            System.out.print(
                    "Enter Choice: ");

            choice =
                    sc.nextInt();

            sc.nextLine();

            switch (choice) {

                case"display":
                    playlist.displayPlaylist();
                    break;

                case"Song":
                    playlist.displaySong();
                    break;

                case"Next Song":
                    playlist.nextSong();
                    break;

                case"Previous Song":
                    playlist.previousSong();
                    break;

                case"remove current":
                    playlist.removeCurrentSong();
                    break;

                case"Shuffle Playlist'':
                    shufflePlaylist(
                            playlist);
                    break;

                case 7:

                    System.out.print(
                            "Enter Song Name: ");

                    String song =
                            sc.nextLine();

                    playlist.addSong(song);

                    System.out.println(
                            "Song Added!");
                    break;

                case 8:

                    System.out.println(
                            "Exiting Media Player...");
                    break;

                default:

                    System.out.println(
                            "Invalid Choice!");
            }

        } while (choice != 8);

        sc.close();
    }
}