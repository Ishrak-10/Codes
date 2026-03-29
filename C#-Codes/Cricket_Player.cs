using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cricket_Player
{
    public class Player
    {
        public string playerId { get; set; }
        public string playerName { get; set; }
        public string teamName { get; set; }

        public Player(string playerId, string playerName, string teamName)
        {
            this.playerId = playerId;
            this.playerName = playerName;
            this.teamName = teamName;
        }

        public virtual void ShowInfo()
        {
            Console.WriteLine($"Player Id: {playerId}");
            Console.WriteLine($"Player Name: {playerName}");
            Console.WriteLine($"Team Name: {teamName}");
        }
    }

    public class Batsman : Player
    {
        public int totalRuns { get; set; }
        public double battingAverage { get; set; }
        public int highestScore { get; set; }

        public Batsman(string playerId, string playerName, string teamName, int totalRuns, double battingAverage, int highestScore)
         : base(playerId, playerName, teamName)
        {
            this.totalRuns = totalRuns;
            this.battingAverage = battingAverage;
            this.highestScore = highestScore;
        }
        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine($"Total Runs: {totalRuns}");
            Console.WriteLine($"Batting Average: {battingAverage}");
            Console.WriteLine($"Highest Score: {highestScore}");
        }
    }

    public class Bowler : Player
    {
        public int totalWickets { get; set; }
        public double bowlingAverage { get; set; }

        public Bowler(string playerId, string playerName, string teamName, int totalWickets, double bowlingAverage)
         : base(playerId, playerName, teamName)
        {
            this.totalWickets = totalWickets;
            this.bowlingAverage = bowlingAverage;
        }
        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine($"Total Wickets: {totalWickets}");
            Console.WriteLine($"Bowling Average: {bowlingAverage}");
        }
    }

    public class AllRounder : Player
    {
        public int totalRuns { get; set; }
        public int totalWickets { get; set; }

        public AllRounder(string playerId, string playerName, string teamName, int totalRuns, int totalWickets)
         : base(playerId, playerName, teamName)
        {
            this.totalRuns = totalRuns;
            this.totalWickets = totalWickets;
        }
        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine($"Total Runs: {totalRuns}");
            Console.WriteLine($"Total Wickets: {totalWickets}");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Player[] players = new Player[4];
            players[0] = new Batsman("P-1", "Tom Latham", "NZ", 6789, 57.3, 183);
            players[1] = new Bowler("P-2", "Taskin Ahmed", "BD", 104, 23.2);
            players[2] = new AllRounder("P-3", "Glenn Maxwell", "AUS", 7590, 98);
            players[3] = new AllRounder("P-4", "Sam Curren", "ENG", 781, 60);

            foreach (Player player in players)
            {
                player.ShowInfo();
                Console.WriteLine("-----------------------------");

            }
        }
    }

}
