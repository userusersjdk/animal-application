import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class PetSelector {
    public static void main(String[] args) {
        // Create the main frame
        JFrame frame = new JFrame("Pet Selector");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);

        // Create a panel to hold the radio buttons and the button
        JPanel panel = new JPanel();

        // Create a button group to group the radio buttons
        ButtonGroup group = new ButtonGroup();

        // Create radio buttons for each pet
        JRadioButton birdButton = new JRadioButton("Bird");
        JRadioButton catButton = new JRadioButton("Cat");
        JRadioButton dogButton = new JRadioButton("Dog");
        JRadioButton rabbitButton = new JRadioButton("Rabbit");
        JRadioButton pigButton = new JRadioButton("Pig");

        // Add the radio buttons to the button group
        group.add(birdButton);
        group.add(catButton);
        group.add(dogButton);
        group.add(rabbitButton);
        group.add(pigButton);

        // Add the radio buttons to the panel
        panel.add(birdButton);
        panel.add(catButton);
        panel.add(dogButton);
        panel.add(rabbitButton);
        panel.add(pigButton);

        // Create a button to show the selected pet
        JButton showButton = new JButton("Show Selection");
        showButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Determine which radio button is selected
                String selectedPet = null;
                if (birdButton.isSelected()) {
                    selectedPet = "Bird";
                } else if (catButton.isSelected()) {
                    selectedPet = "Cat";
                } else if (dogButton.isSelected()) {
                    selectedPet = "Dog";
                } else if (rabbitButton.isSelected()) {
                    selectedPet = "Rabbit";
                } else if (pigButton.isSelected()) {
                    selectedPet = "Pig";
                }

                // Show the selected pet in a message box
                if (selectedPet != null) {
                    JOptionPane.showMessageDialog(frame, "You selected: " + selectedPet);
                }
            }
        });

        // Add the button to the panel
        panel.add(showButton);

        // Add the panel to the frame
        frame.add(panel);

        // Set the frame to be visible
        frame.setVisible(true);
    }
}
